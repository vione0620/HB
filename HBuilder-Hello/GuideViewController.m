//
//  GuideViewController.m
//  HBuilder
//
//  Created by apple on 2020/8/26.
//  Copyright © 2020 DCloud. All rights reserved.
//

#import "GuideViewController.h"
#import "AppDelegate.h"
#import "Masonry.h"



static NSInteger guideCount = 1;
@interface GuideViewController () <UIScrollViewDelegate>

@end

@implementation GuideViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
//    [CACacheCustomADTool sharedInstanceWithRootName:@"ADFile"];
    UIImage *image = nil;
    NSString *imgStr = @"ad55.jpg";
//    if (IS_IPHONE_X) {
//        imgStr = @"adX.jpg";
//    } else if (kiPhone6 ){
//        imgStr = @"ad47.jpg";
//    } else if (IS_IPHONE_Xs_Max ){
//        imgStr = @"adxm.jpg";
//    } else if (IS_IPHONE_Xr ){
//        imgStr = @"adxr.jpg";
//    }
//    if ([[CACacheCustomADTool sharedInstance] getCacheImageWithIndex:0]) {
//        image = [[CACacheCustomADTool sharedInstance] getCacheImageWithIndex:0];
//    } else {
//        image = [UIImage imageNamed:imgStr];
//    }
    image = [UIImage imageNamed:imgStr];
    [self performSelector:@selector(intoMainPage) withObject:nil afterDelay:5];
    
    // Do any additional setup after loading the view from its nib.
//    [self.myScroll setPagingEnabled:YES];
//        self.myScroll.showsVerticalScrollIndicator =NO;
//        self.myScroll.showsHorizontalScrollIndicator=NO;
//        self.myScroll.bounces=NO;
//        self.myScroll.contentSize=CGSizeMake(SCREEN_WIDTH*guideCount, SCREEN_HEIGHT);
//
//        for (int i=1; i<guideCount+1; i++) {
//            UIImageView *imageV=[[UIImageView alloc]initWithFrame:CGRectMake(SCREEN_WIDTH*(i-1), -1, SCREEN_WIDTH, SCREEN_HEIGHT + 3)];
//            imageV.contentMode = UIViewContentModeScaleAspectFill;
//            imageV.autoresizingMask = UIViewAutoresizingNone;
//            imageV.clipsToBounds = YES;
//
//            imageV.image=[UIImage imageNamed:[NSString stringWithFormat:@"guide%d.jpg",i]];
//            if (i==guideCount) {
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
//            [self.myScroll addSubview:imageV];
//        }
//        [self.view addSubview:self.myScroll];
//
//        UIPageControl *pageControl=[[UIPageControl alloc]init];
//              pageControl.bounds= CGRectMake(0, 0, 150, 40);
//        if ([self isNotchScreen] == YES) {
//            pageControl.center= CGPointMake(SCREEN_WIDTH*0.5-20, SCREEN_HEIGHT-[self mTabbarHeight]-40);
//        }else{
//            pageControl.center= CGPointMake(SCREEN_WIDTH*0.5, SCREEN_HEIGHT-[self mTabbarHeight]-40);
//        }
//
//        //设置页数
//        pageControl.numberOfPages = guideCount;
//        //当前选中页码
//        pageControl.currentPageIndicatorTintColor = [UIColor whiteColor];
//        //其他页码
//        pageControl.pageIndicatorTintColor = RGBAColor(255, 255, 255, 0.5);
//        [pageControl addTarget:self action:@selector(pageChange) forControlEvents:UIControlEventValueChanged];
//        //添加到控制器view上
//        [self.view addSubview:pageControl];
//        self.pageControl = pageControl;
//        //设置代理
//        self.myScroll.delegate=self;
//        //弹簧效果
//        self.myScroll.bounces=NO;
    
    
    /**
    CGFloat bottom = kIphoneX ? 0 : 10;
    UIView *bgView = [[UIView alloc]initWithFrame:CGRectMake(20, kStatusBar_Height, SCREEN_WIDTH - 40, SCREEN_HEIGHT - kBottomOffset - kStatusBar_Height - bottom)];

    bgView.layer.borderWidth = 1;
    bgView.layer.borderColor = RGBAColor(70, 184, 92, 1).CGColor;
    UIImageView *imageIV = [[UIImageView alloc]initWithFrame:CGRectMake(20, 20, SCREEN_WIDTH - 80, (SCREEN_WIDTH - 80)  / 0.83)];
    imageIV.image = [UIImage imageNamed:@"welcom"];
    
    CGFloat top = imageIV.bounds.size.height;
    top += kIphoneX ? 100 : 80;
    UILabel *label = [[UILabel alloc]init];
    label.text = @"欢迎来到早餐商户端";
    [label sizeToFit];
    label.center = CGPointMake(bgView.bounds.size.width / 2, top);
    
    top += kIphoneX ? 70 : 50;
    UIView *btnBG = [[UIView alloc]initWithFrame:CGRectMake(20, top, SCREEN_WIDTH - 80, 50)];
    btnBG.backgroundColor = RGBAColor(70, 184, 92, 1);
    btnBG.layer.cornerRadius = 5;
    
    UIButton *btn = [[UIButton alloc]initWithFrame:CGRectMake(3, 3, btnBG.frame.size.width - 6, btnBG.frame.size.height - 6)];
    btn.layer.cornerRadius = 5;
    btn.layer.borderWidth = 1;
    btn.layer.borderColor = [UIColor whiteColor].CGColor;
    [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [btn setTitle:@"进入商家平台" forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(intoMainPage) forControlEvents:UIControlEventTouchUpInside];
    
    [self.view addSubview:bgView];
    [bgView addSubview:imageIV];
    [bgView addSubview:label];
    [bgView addSubview:btnBG];
    [btnBG addSubview:btn];
    
    */
    
    
//    [bgView mas_makeConstraints:^(MASConstraintMaker *make) {
//        make.edges.mas_equalTo(20);
//    }];
//    [imageIV mas_makeConstraints:^(MASConstraintMaker *make) {
//        make.top.mas_equalTo(80);
//        make.centerY.mas_equalTo(0);
//        make.height.offset((SCREEN_WIDTH - 80)  / 0.83);
//        make.width.offset(SCREEN_WIDTH - 80);
//    }];
//    [label mas_makeConstraints:^(MASConstraintMaker *make) {
//        make.centerX.mas_equalTo(bgView);
//        make.top.mas_equalTo(imageIV.mas_bottom);
//    }];
//    [btnBG mas_makeConstraints:^(MASConstraintMaker *make) {
//        make.top.mas_equalTo(label.mas_bottom).offset(60);
//        make.left.mas_equalTo(25);
//        make.right.mas_equalTo(-25);
//        make.height.mas_offset(50);
//    }];
//    [btn mas_makeConstraints:^(MASConstraintMaker *make) {
//        make.edges.mas_offset(5);
//    }];
    
}

- (void)loadAdImage:(NSArray *)urlStrs urlstr:(NSString *)urlStr {
    
    if (urlStrs.count) {
//        if ([[CACacheCustomADTool sharedInstance] setImageUrlStr:urlStrs identity:urlStr]) {
//            if ([[CACacheCustomADTool sharedInstance] getCacheImageWithIndex:0]) {
//                image = [[CACacheCustomADTool sharedInstance] getCacheImageWithIndex:0];
//            } else {
//                image = [UIImage imageNamed:imgStr];
//            }
//        }
    } else {
//        image = [UIImage imageNamed:imgStr];
    }
   
}

-(void)intoMainPage
{
    AppDelegate *app=(AppDelegate *)[[UIApplication sharedApplication]delegate];
//    [app setRootViewController];//切换跟视图
    [app pushHomeViewController];
//    [app setADVC];
    
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
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
