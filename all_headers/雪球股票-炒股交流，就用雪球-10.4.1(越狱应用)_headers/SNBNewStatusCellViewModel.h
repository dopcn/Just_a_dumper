//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString, SNBPublicTimelineAdItem, SNBStatus, SNBTimelineItem, SNBUser;

@interface SNBNewStatusCellViewModel : NSObject
{
    _Bool _tagHighLight;
    _Bool _showSticky;
    _Bool _showAdTips;
    _Bool _showFeedbackCloseButton;
    _Bool _isAd;
    SNBStatus *_status;
    SNBPublicTimelineAdItem *_adItem;
    SNBTimelineItem *_timeline;
    NSString *_tagString;
    NSString *_commentCountStr;
    NSString *_repostCountStr;
    NSAttributedString *_briefAttributeString;
    NSAttributedString *_briefAttributeStringWithoutTail;
    NSAttributedString *_titleAttributeString;
    NSAttributedString *_titleAttributeStringWithoutTail;
    NSArray *_imageUrls;
    NSString *_title;
    NSString *_brief;
    NSString *_readCountDesc;
    NSString *_replyCountStr;
    NSString *_authorDesc;
    NSString *_sendInfoDesc;
    NSString *_briefImageURL;
    NSString *_userName;
    struct CGSize _titleLabelSize;
    struct CGSize _briefLabelSize;
}

+ (unsigned long long)styleForStatus:(id)arg1;
+ (unsigned long long)styleForTimelineItem:(id)arg1;
@property(nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
@property(nonatomic) _Bool showFeedbackCloseButton; // @synthesize showFeedbackCloseButton=_showFeedbackCloseButton;
@property(nonatomic) _Bool showAdTips; // @synthesize showAdTips=_showAdTips;
@property(nonatomic) _Bool showSticky; // @synthesize showSticky=_showSticky;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *briefImageURL; // @synthesize briefImageURL=_briefImageURL;
@property(copy, nonatomic) NSString *sendInfoDesc; // @synthesize sendInfoDesc=_sendInfoDesc;
@property(copy, nonatomic) NSString *authorDesc; // @synthesize authorDesc=_authorDesc;
@property(copy, nonatomic) NSString *replyCountStr; // @synthesize replyCountStr=_replyCountStr;
@property(copy, nonatomic) NSString *readCountDesc; // @synthesize readCountDesc=_readCountDesc;
@property(copy, nonatomic) NSString *brief; // @synthesize brief=_brief;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(nonatomic) struct CGSize briefLabelSize; // @synthesize briefLabelSize=_briefLabelSize;
@property(nonatomic) struct CGSize titleLabelSize; // @synthesize titleLabelSize=_titleLabelSize;
@property(copy, nonatomic) NSAttributedString *titleAttributeStringWithoutTail; // @synthesize titleAttributeStringWithoutTail=_titleAttributeStringWithoutTail;
@property(copy, nonatomic) NSAttributedString *titleAttributeString; // @synthesize titleAttributeString=_titleAttributeString;
@property(copy, nonatomic) NSAttributedString *briefAttributeStringWithoutTail; // @synthesize briefAttributeStringWithoutTail=_briefAttributeStringWithoutTail;
@property(copy, nonatomic) NSAttributedString *briefAttributeString; // @synthesize briefAttributeString=_briefAttributeString;
@property(copy, nonatomic) NSString *repostCountStr; // @synthesize repostCountStr=_repostCountStr;
@property(copy, nonatomic) NSString *commentCountStr; // @synthesize commentCountStr=_commentCountStr;
@property(readonly, nonatomic) _Bool tagHighLight; // @synthesize tagHighLight=_tagHighLight;
@property(readonly, copy, nonatomic) NSString *tagString; // @synthesize tagString=_tagString;
@property(retain, nonatomic) SNBTimelineItem *timeline; // @synthesize timeline=_timeline;
@property(retain, nonatomic) SNBPublicTimelineAdItem *adItem; // @synthesize adItem=_adItem;
@property(retain, nonatomic) SNBStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
@property(readonly, nonatomic) double sizeRatio;
@property(readonly, copy, nonatomic) SNBUser *user;
@property(readonly, nonatomic) double textContentWidth;
- (double)_snb_oneLineHeight;
- (id)_snb_createBriefAttributedString:(long long)arg1;
- (long long)titleLabelLineNum;
- (long long)briefLabelLineNum;
@property(readonly, nonatomic) _Bool shouldHiddenBrief;
- (_Bool)_snb_shouldDisplaySingleImage;
@property(readonly, nonatomic) unsigned long long style;
- (id)initWithAdItem:(id)arg1;
- (id)initWithStatus:(id)arg1;
- (id)initWithStatus:(id)arg1 needBuildObserver:(_Bool)arg2;
- (id)initWithTimelineItem:(id)arg1;

@end

