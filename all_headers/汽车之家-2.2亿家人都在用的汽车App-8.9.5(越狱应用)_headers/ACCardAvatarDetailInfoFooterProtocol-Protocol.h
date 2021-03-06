//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIColor;

@protocol ACCardAvatarDetailInfoFooterProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType clickDateAction;
@property(copy, nonatomic) CDUnknownBlockType clickSourceTypeAction;
@property(copy, nonatomic) CDUnknownBlockType clickCommentsCountAction;
@property(nonatomic) long long footerRightBottomType;
@property(copy, nonatomic) NSString *cardDate;
@property(copy, nonatomic) NSString *cardAdditionalInfo;
@property(copy, nonatomic) NSString *cardSourceType;
@property(copy, nonatomic) NSString *cardSourceTypeImgUrlStr;
@property(copy, nonatomic) NSString *cardCommentsCount;
@property(copy, nonatomic) NSString *cardCategory;
@property(copy, nonatomic) NSString *cardAvatarName;
@property(copy, nonatomic) NSString *cardAvatarUrlString;
@property(nonatomic) _Bool tag3ShouldHideBorder;
@property(nonatomic) _Bool tag2ShouldHideBorder;
@property(nonatomic) _Bool tag1ShouldHideBorder;
@property(copy, nonatomic) NSString *cardTag3;
@property(copy, nonatomic) NSString *cardTag2;
@property(copy, nonatomic) NSString *cardTag;
@property(readonly, nonatomic) UIColor *cardTag3BGColor;
@property(readonly, nonatomic) UIColor *cardTag2BGColor;
@property(readonly, nonatomic) UIColor *cardTagBGColor;
@property(readonly, nonatomic) UIColor *cardTag3Color;
@property(readonly, nonatomic) UIColor *cardTag2Color;
@property(readonly, nonatomic) UIColor *cardTagColor;
- (void)updateFooterWidth:(double)arg1;
- (_Bool)isTextAndImage;
- (_Bool)hasSubtitle;
- (double)footerModelWidth;
- (double)footerCategoryAccessoryInfoHeight;
- (double)footerHeight;
- (_Bool)hasCardDetailInfoFooter;
@end

