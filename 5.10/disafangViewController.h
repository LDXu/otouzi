//
//  disafangViewController.h
//  555
//
//  Created by 李浩宇 on 15/11/4.
//  Copyright © 2015年 李浩宇. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListModel.h"
#define __kScreenWidth__ ([[UIScreen mainScreen] bounds].size.width)
#define __kScreenHeight__ ([[UIScreen mainScreen] bounds].size.height)
@interface disafangViewController : UIViewController<UIWebViewDelegate>

@property (nonatomic, strong)ListModel *model;
@end
