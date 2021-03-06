//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol WMExtendFollowGuideProxy, WMPageManagerProxy, WMPicBrowserProxy, WMThemeProxy, WMWebViewProxy;

@protocol WMServiceProxy <NSObject>
- (_Bool)isShowingDiversionBubbleWithUserInfo:(id *)arg1;
- (_Bool)isInNewsFlowMode;
- (_Bool)isInSubscriptMode;
- (_Bool)isSmartImageMode;
- (UIView *)parentViewToShowSearchViewController;
- (id <WMExtendFollowGuideProxy>)extendFollowGuideProxy;
- (id <WMThemeProxy>)themeProxy;
- (id <WMPicBrowserProxy>)picBrowser;
- (id <WMPageManagerProxy>)pageManager;
- (id <WMWebViewProxy>)webView;
@end

