//
//  YYADViewController.m
//  HBuilder
//
//  Created by apple on 2020/8/26.
//  Copyright © 2020 DCloud. All rights reserved.
//

#import "YYADViewController.h"
#import "AppDelegate.h"

@interface YYADViewController () <UIScrollViewDelegate>

@property (weak, nonatomic) IBOutlet UIScrollView *myScroll;
/** 添加pagecontrol*/
@property (nonatomic,strong) UIPageControl *pageControl;
@property (nonatomic, strong) NSTimer *timer;
@property (nonatomic, assign) NSInteger countDownNum;

@property (weak, nonatomic) IBOutlet UIView *countDownView;
@property (weak, nonatomic) IBOutlet UILabel *passLabel;
@end

@implementation YYADViewController
{
    BOOL _userTouch;
}
- (void)viewDidLoad {
    [super viewDidLoad];
//    dispatch_sync(dispatch_get_main_queue(), ^{
//        [self setup];
//    });
    [self setup];
    // Do any additional setup after loading the view from its nib.
    
}
- (BOOL)prefersStatusBarHidden {
    return NO;
}
- (void)setup {
    
    NSMutableArray *arr = [NSMutableArray array];
    for (int i = 1; i < 20; i++) {
        UIImage *image = [UIImage imageNamed:[NSString stringWithFormat:@"900X1600 %d",i]];
      
        [arr addObject:image];
    }
    self.countDownView.layer.cornerRadius = self.countDownView.frame.size.height / 2;
//        self.countDownView.hidden = YES;
         self.countDownNum = 5;
            NSInteger imgCount = 1;
            [self.myScroll setPagingEnabled:YES];
                self.myScroll.showsVerticalScrollIndicator =NO;
                self.myScroll.showsHorizontalScrollIndicator=NO;
                self.myScroll.bounces=NO;
                self.myScroll.contentSize=CGSizeMake(SCREEN_WIDTH*imgCount, SCREEN_HEIGHT);

                for (int i=1; i<imgCount+1; i++) {
                    UIImageView *imageV=[[UIImageView alloc]initWithFrame:CGRectMake(SCREEN_WIDTH*(i-1), -1, SCREEN_WIDTH, SCREEN_HEIGHT + 3)];
                    imageV.contentMode = UIViewContentModeScaleAspectFill;
                    imageV.autoresizingMask = UIViewAutoresizingNone;
                    imageV.clipsToBounds = YES;
                    
                    imageV.backgroundColor = [UIColor whiteColor];
//                    imageV.image=[UIImage imageNamed:[NSString stringWithFormat:@"guide%d.jpg",i]];
//                    imageV.image=[UIImage imageNamed:[NSString stringWithFormat:@"prepare"]];
                    
//                    imageV.animationDuration = 1.3;
//                    [imageV setAnimationImages:arr];
//                    [imageV startAnimating];
                    imageV.image=[UIImage imageNamed:[NSString stringWithFormat:@"newPre.jpg"]];
        //            if (i==imgCount) {
        //                [imageV setUserInteractionEnabled:YES];
        //                UIButton *btn=[UIButton buttonWithType:0];
        //                btn.backgroundColor=[UIColor whiteColor];
        //                btn.layer.cornerRadius = 20;
        //                btn.layer.masksToBounds = YES;
        //                [btn setTitle:@"立即体验" forState:UIControlStateNormal];
        //                [btn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        //                btn.titleLabel.font = [UIFont fontWithName:@"PingFangSC-Bold" size:16];
        //                if ([self isNotchScreen] == YES) {
        //                    btn.frame=CGRectMake(SCREEN_WIDTH/2-60, SCREEN_HEIGHT-[self mTabbarHeight]-100, 120, 40);
        //                }
        //                else{
        //                    btn.frame=CGRectMake(SCREEN_WIDTH/2-60, SCREEN_HEIGHT-[self mTabbarHeight]-100, 120, 40);
        //                }
        //                [btn addTarget:self action:@selector(intoMainPage) forControlEvents:UIControlEventTouchUpInside];
        //                [imageV addSubview:btn];
        //    //            UITapGestureRecognizer *tapG=[[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(tapAction:)];
        //    //            [imageV addGestureRecognizer:tapG];
        //            }
                    [self.myScroll addSubview:imageV];
                }
        //        [self.view addSubview:self.myScroll];
                
                UIPageControl *pageControl=[[UIPageControl alloc]init];
                      pageControl.bounds= CGRectMake(0, 0, 150, 40);
                if ([self isNotchScreen] == YES) {
                    pageControl.center= CGPointMake(SCREEN_WIDTH*0.5-20, SCREEN_HEIGHT-[self mTabbarHeight]-40);
                }else{
                    pageControl.center= CGPointMake(SCREEN_WIDTH*0.5, SCREEN_HEIGHT-[self mTabbarHeight]-40);
                }
                      
                //设置页数
                pageControl.numberOfPages = imgCount;
                //当前选中页码
                pageControl.currentPageIndicatorTintColor = [UIColor whiteColor];
                //其他页码
                pageControl.pageIndicatorTintColor = RGBAColor(255, 255, 255, 0.5);
                [pageControl addTarget:self action:@selector(pageChange) forControlEvents:UIControlEventValueChanged];
            if (imgCount < 2) {
                pageControl.hidden = YES;
            }
                //添加到控制器view上
                [self.view addSubview:pageControl];
                self.pageControl = pageControl;
                //设置代理
                self.myScroll.delegate=self;
                //弹簧效果
                self.myScroll.bounces=NO;
    
//    __block YYADViewController *blockSelf = self;
//
//    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
//
//    blockSelf->_timer=[NSTimer scheduledTimerWithTimeInterval:1.0 target:blockSelf selector:@selector(countDown) userInfo:nil repeats:YES] ;
//
//    [[NSRunLoop currentRunLoop] addTimer:blockSelf->_timer forMode:NSRunLoopCommonModes];
//
//    [[NSRunLoop currentRunLoop] run];
////        [[NSRunLoop currentRunLoop] runMode:NSRunLoopCommonModes beforeDate:[NSDate distantFuture]];
//
//    });
    
    
//    [self performSelector:@selector(countDown) withObject:nil afterDelay:0.5];
    
//        self.timer = [NSTimer timerWithTimeInterval:1.0 target:self selector:@selector(countDown) userInfo:nil repeats:YES];

//        [[NSRunLoop currentRunLoop] addTimer:self.timer forMode:NSRunLoopCommonModes];
//    [[NSRunLoop currentRunLoop] runMode:NSRunLoopCommonModes beforeDate:[NSDate distantFuture]];
//    [self.timer fire];
    
    //    [[NSRunLoop mainRunLoop] run];
//        [self countDown];
    
//    NSTimer *timer = [NSTimer timerWithTimeInterval:1.0 target:self selector:@selector(countDown) userInfo:nil repeats:NO];
//    [[NSRunLoop currentRunLoop] addTimer:timer forMode:NSRunLoopCommonModes];
//    [[NSRunLoop currentRunLoop] runMode:NSRunLoopCommonModes beforeDate:[NSDate distantPast]];
}

- (void)countDown {
    if (_userTouch) {
        return;
    }
//    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
//            dispatch_sync(dispatch_get_main_queue(), ^{
//
//             NSTimer *timer = [NSTimer timerWithTimeInterval:1.0 target:self selector:@selector(countDown) userInfo:nil repeats:NO];
//             [[NSRunLoop currentRunLoop] addTimer:timer forMode:NSRunLoopCommonModes];
//                [[NSRunLoop currentRunLoop] runMode:NSRunLoopCommonModes beforeDate:[NSDate distantPast]];
//            });
//
//    });

    self.countDownView.hidden = NO;
    self.passLabel.text = [NSString stringWithFormat:@"%lds", (long)self.countDownNum];
       if (self.countDownNum < 0) {
           [self passAction:nil];
           self.timer = nil;
           return;
       }
    self.countDownNum --;
    
//    [self performSelector:@selector(countDown) withObject:nil afterDelay:1];
}
-(void)intoMainPage
{
    _userTouch = YES;
    AppDelegate *app=(AppDelegate *)[[UIApplication sharedApplication]delegate];
    [app pushHomeViewController];//切换跟视图
}

-(void)tapAction:(UITapGestureRecognizer *)sender
{
    if ([sender state] == UIGestureRecognizerStateEnded) {
        [self intoMainPage];
    }
}

-(void)pageChange{
    int page = (int)self.pageControl.currentPage;
    CGFloat offSetX= page *self.pageControl.frame.size.width;
    [UIView beginAnimations:nil context:nil];
    self.myScroll.contentOffset = CGPointMake(offSetX, 0);
    [UIView commitAnimations];
}

-(void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView{
    //获取滚动位置
    //页码
    int pageNo= scrollView.contentOffset.x/scrollView.frame.size.width;
    self.pageControl.currentPage=pageNo;
}

- (BOOL)isNotchScreen {

    if ([UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad) {
        return NO;
    }

    CGSize size = [UIScreen mainScreen].bounds.size;
    NSInteger notchValue = size.width / size.height * 100;

    if (216 == notchValue || 46 == notchValue) {
        return YES;
    }

    return NO;
}

-(float)mTabbarHeight{
    //Tabbar高度
    return self.tabBarController.tabBar.bounds.size.height;
}

- (IBAction)passAction:(id)sender {
    self.timer = nil;
    _userTouch = YES;
    AppDelegate *app=(AppDelegate *)[[UIApplication sharedApplication]delegate];
    [app pushHomeViewController];//切换跟视图
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
