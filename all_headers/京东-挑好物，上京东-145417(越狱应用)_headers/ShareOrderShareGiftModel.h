//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface ShareOrderShareGiftModel : JDModel
{
    NSString *_activityId;
    NSString *_shareGuideText;
    NSString *_shareButtonText;
    NSString *_isShowShareButton;
    NSString *_isShareGift;
    NSString *_commentShareUrl;
    NSString *_firstImageUrl;
    NSString *_commentContent;
}

@property(copy, nonatomic) NSString *commentContent; // @synthesize commentContent=_commentContent;
@property(copy, nonatomic) NSString *firstImageUrl; // @synthesize firstImageUrl=_firstImageUrl;
@property(copy, nonatomic) NSString *commentShareUrl; // @synthesize commentShareUrl=_commentShareUrl;
@property(copy, nonatomic) NSString *isShareGift; // @synthesize isShareGift=_isShareGift;
@property(copy, nonatomic) NSString *isShowShareButton; // @synthesize isShowShareButton=_isShowShareButton;
@property(copy, nonatomic) NSString *shareButtonText; // @synthesize shareButtonText=_shareButtonText;
@property(copy, nonatomic) NSString *shareGuideText; // @synthesize shareGuideText=_shareGuideText;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

