//
//  bannerViewController.h
//  555
//
//  Created by otouzi on 16/1/18.
//  Copyright © 2016年 李浩宇. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NJKWebViewProgressView.h"
#import "NJKWebViewProgress.h"
@interface BannerViewController : UIViewController<UIWebViewDelegate,NJKWebViewProgressDelegate>
@property (nonatomic, strong) UIWebView *webView;
@property (nonatomic, strong)NSMutableArray *data;
@property (nonatomic, strong)NSString *urlStr;
@end


