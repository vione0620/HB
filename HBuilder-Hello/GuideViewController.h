//
//  GuideViewController.h
//  HBuilder
//
//  Created by apple on 2020/8/26.
//  Copyright © 2020 DCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GuideViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIScrollView *myScroll;
/** 添加pagecontrol*/
@property (nonatomic,strong) UIPageControl *pageControl;
@end

NS_ASSUME_NONNULL_END
