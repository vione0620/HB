//
//  CAThemeColor.h
//  NothingClassPrefix
//
//  Created by CADisplay on 2019/10/8.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CAThemeColor : NSObject
+ (instancetype)shareInstance;
/**
 控制器背景色
 */
@property (nonatomic, strong) UIColor *controllerBGColor;
@property (nonatomic, strong) UIColor *controllerBGDarkColor;
/**
 naviBar背景色
 */
@property (nonatomic, strong) UIColor *naviBarTintColor;
@property (nonatomic, strong) UIColor *naviBarTintDarkColor;
/**
 naviBar标题的颜色
 */
@property (nonatomic, strong) UIColor *naviBarTitleColor;
@property (nonatomic, strong) UIColor *naviBarTitleDarkColor;
/**
 tabBar背景色
 */
@property (nonatomic, strong) UIColor *tabbarTintColor;
@property (nonatomic, strong) UIColor *tabbarTintDarkColor;
/**
 tableView 背景色
 */
@property (nonatomic, strong) UIColor *tableViewBGColor;
@property (nonatomic, strong) UIColor *tableViewBGDarkColor;
/**
 TableViewCell 背景色
 */
@property (nonatomic, strong) UIColor *tableViewCellBGColor;
@property (nonatomic, strong) UIColor *tableViewCellBGDarkColor;
/**
 TableViewCell中Label 文字颜色
 */
@property (nonatomic, strong) UIColor *tableViewCellLabelTextColor;
@property (nonatomic, strong) UIColor *tableViewCellLabelTextDarkColor;
/**
 TableViewCell中ImageView 图片渲染颜色
 */
@property (nonatomic, strong) UIColor *tableViewCellImageViewRenderColor;
@property (nonatomic, strong) UIColor *tableViewCellImageViewRenderDarkColor;
/**
 TableViewHeaderView 背景色
 */
@property (nonatomic, strong) UIColor *tableViewHeaderViewBGColor;
@property (nonatomic, strong) UIColor *tableViewHeaderViewBGDarkColor;
/**
 TableViewHeaderView中label 文字颜色
 */
@property (nonatomic, strong) UIColor *tableViewHeaderViewLabelTextColor;
@property (nonatomic, strong) UIColor *tableViewHeaderViewLabelTextDarkColor;
/**
 CollectionView 背景色
 */
@property (nonatomic, strong) UIColor *collectionViewBGColor;
@property (nonatomic, strong) UIColor *collectionViewBGDarkColor;
/**
 CollectionViewCell 背景色
 */
@property (nonatomic, strong) UIColor *collectionViewCellBGColor;
@property (nonatomic, strong) UIColor *collectionViewCellBGDarkColor;
/**
 CollectionViewCell中Label 文字颜色
 */
@property (nonatomic, strong) UIColor *collectionViewCellLabelTextColor;
@property (nonatomic, strong) UIColor *collectionViewCellLabelTextDarkColor;
/**
 CollectionViewHeaderView&CollectionViewFooterView 背景色
 */
@property (nonatomic, strong) UIColor *collectionViewHeaderViewBGColor;
@property (nonatomic, strong) UIColor *collectionViewHeaderViewBGDarkColor;
/**
 CollectionViewHeaderView&CollectionViewFooterView中label 文字颜色
 */
@property (nonatomic, strong) UIColor *collectionViewHeaderViewLabelTextColor;
@property (nonatomic, strong) UIColor *collectionViewHeaderViewLabelTextDarkColor;

/**
 button Title
 */
@property (nonatomic, strong) UIColor *btnTitleNormalColor;
@property (nonatomic, strong) UIColor *btnTitleNormalDarkColor;
@property (nonatomic, strong) UIColor *btnTitleHighlightedColor;
@property (nonatomic, strong) UIColor *btnTitleHighlightedDarkColor;
@property (nonatomic, strong) UIColor *btnTitleSelectedColor;
@property (nonatomic, strong) UIColor *btnTitleSelectedDarkColor;
@property (nonatomic, strong) UIColor *btnBGColor;
@property (nonatomic, strong) UIColor *btnBGDarkColor;
@property (nonatomic, strong) UIColor *btnBorderColor;
@property (nonatomic, strong) UIColor *btnBordeDarkColor;

/**
 ScrollView BG
 */
@property (nonatomic, strong) UIColor *scrollViewBGColor;
@property (nonatomic, strong) UIColor *scrollViewBGDarkColor;
@property (nonatomic, strong) UIColor *Color;
@property (nonatomic, strong) UIColor *DarkColor;

@end


NS_ASSUME_NONNULL_END
