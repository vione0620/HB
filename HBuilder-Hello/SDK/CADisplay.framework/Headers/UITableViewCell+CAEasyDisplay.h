//
//  UITableViewCell+CAEasyDisplay.h
//  CADisplay
//
//  Created by CADisplay on 2019/9/23.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface UITableViewCell (CAEasyDisplay)
/**
 width 两边边距
 */
- (void)shearTableView:(UITableView *)tableView IndexPath:(NSIndexPath *)indexPath cornerRadius:(CGFloat)radius width:(CGFloat)width;
@end

NS_ASSUME_NONNULL_END
