//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDImageView, JDWebViewController, NSDictionary, NSString, UINavigationBar;

@interface JDSHNavigationManager : NSObject
{
    _Bool _isLuckShare;
    _Bool _isBlackIcon;
    _Bool _firstImg;
    CDUnknownBlockType _freshNavigationButton;
    long long _naviType;
    JDWebViewController *_viewController;
    UINavigationBar *_navigationBar;
    JDImageView *_imageView;
    NSDictionary *_naviConfigDict;
    NSString *_bgImgUrl;
    NSString *_bgColor;
    NSString *_naviIconType;
}

@property(nonatomic) _Bool firstImg; // @synthesize firstImg=_firstImg;
@property(nonatomic) _Bool isBlackIcon; // @synthesize isBlackIcon=_isBlackIcon;
@property(copy, nonatomic) NSString *naviIconType; // @synthesize naviIconType=_naviIconType;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(copy, nonatomic) NSString *bgImgUrl; // @synthesize bgImgUrl=_bgImgUrl;
@property(nonatomic) __weak NSDictionary *naviConfigDict; // @synthesize naviConfigDict=_naviConfigDict;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) __weak JDWebViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool isLuckShare; // @synthesize isLuckShare=_isLuckShare;
@property(nonatomic) long long naviType; // @synthesize naviType=_naviType;
@property(copy, nonatomic) CDUnknownBlockType freshNavigationButton; // @synthesize freshNavigationButton=_freshNavigationButton;
- (void).cxx_destruct;
- (void)imgFirstAppear:(_Bool)arg1;
- (void)luckyShareEnable:(_Bool)arg1;
- (void)setNavigationTitleColor:(id)arg1;
- (void)create_2_NaviIcon;
- (void)p_defaultNaviIcon;
- (void)p_resetNavi;
- (void)p_resetNavigationBar;
- (void)p_configIconWithBlackIcon:(_Bool)arg1 luckShareEnable:(_Bool)arg2 imgFirstAppear:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)p_configIconWithBlackIcon:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)p_transparentNavi;
- (void)p_refreshLeftBarItems;
- (void)p_setIconConfig;
- (_Bool)IsValidColorString:(id)arg1;
- (void)p_setBackgroundImageWithColor:(id)arg1;
- (void)setBackgroundImageWithColor:(id)arg1;
- (void)setBackgroundImageWithUrl:(id)arg1;
- (void)configNaviBackgroundImage;
- (void)configNavigationBarWithConfigInfo:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)p_setBackgroundWithAlpha:(float)arg1;
- (void)setNavigationBarWithType:(long long)arg1 withInfo:(id)arg2 iconColorBlock:(CDUnknownBlockType)arg3;
- (void)setNavigationBarWithType:(long long)arg1 withInfo:(id)arg2;
- (void)setNavigationBarWithType:(long long)arg1;
- (void)dealloc;
- (id)initUniqueInstance;
- (id)init;

@end

