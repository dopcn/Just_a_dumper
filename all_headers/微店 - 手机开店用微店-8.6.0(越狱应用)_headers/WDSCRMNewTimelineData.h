//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WDSCRMTimelineBuyerData, WDSCRMTimelineCouponData, WDSCRMTimelineDiaryData, WDSCRMTimelineIMData, WDSCRMTimelineItemData, WDSCRMTimelineReviewOrderData;

@interface WDSCRMNewTimelineData : NSObject
{
    _Bool _isRead;
    _Bool _is_visitor;
    long long _type;
    NSString *_month;
    NSString *_day;
    NSString *_year;
    long long _dateNumber;
    NSString *_dateNumberString;
    NSString *_feed_type;
    NSString *_feed_time;
    NSString *_buyer_id;
    NSString *_seller_id;
    NSString *_feed_id;
    NSString *_from;
    NSString *_MMdd;
    NSArray *_noteImgUrls;
    NSString *_remark;
    NSString *_bridge_url;
    WDSCRMTimelineBuyerData *_buyerData;
    WDSCRMTimelineCouponData *_couponData;
    NSArray *_tagList;
    WDSCRMTimelineItemData *_itemData;
    WDSCRMTimelineDiaryData *_diaryData;
    WDSCRMTimelineReviewOrderData *_reviewOrderData;
    WDSCRMTimelineIMData *_imData;
    NSString *_img_head;
    NSString *_last_time;
    NSString *_note_name;
    NSString *_download_url;
}

+ (id)safeStr:(id)arg1;
+ (long long)parseType:(long long)arg1;
+ (id)parseImageList:(id)arg1;
+ (id)parseTags:(id)arg1;
+ (id)parseReviewOrder:(id)arg1;
+ (id)parseDiary:(id)arg1;
+ (id)parseItems:(id)arg1;
+ (id)parseCoupon:(id)arg1;
+ (id)parseTeam:(id)arg1;
+ (id)parseDataForUnread:(id)arg1;
+ (id)parseDataForTimeline:(id)arg1;
+ (id)parseData:(id)arg1 isTimeline:(_Bool)arg2;
@property(copy, nonatomic) NSString *download_url; // @synthesize download_url=_download_url;
@property(copy, nonatomic) NSString *note_name; // @synthesize note_name=_note_name;
@property(copy, nonatomic) NSString *last_time; // @synthesize last_time=_last_time;
@property(nonatomic) _Bool is_visitor; // @synthesize is_visitor=_is_visitor;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(copy, nonatomic) NSString *img_head; // @synthesize img_head=_img_head;
@property(retain, nonatomic) WDSCRMTimelineIMData *imData; // @synthesize imData=_imData;
@property(retain, nonatomic) WDSCRMTimelineReviewOrderData *reviewOrderData; // @synthesize reviewOrderData=_reviewOrderData;
@property(retain, nonatomic) WDSCRMTimelineDiaryData *diaryData; // @synthesize diaryData=_diaryData;
@property(retain, nonatomic) WDSCRMTimelineItemData *itemData; // @synthesize itemData=_itemData;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) WDSCRMTimelineCouponData *couponData; // @synthesize couponData=_couponData;
@property(retain, nonatomic) WDSCRMTimelineBuyerData *buyerData; // @synthesize buyerData=_buyerData;
@property(copy, nonatomic) NSString *bridge_url; // @synthesize bridge_url=_bridge_url;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSArray *noteImgUrls; // @synthesize noteImgUrls=_noteImgUrls;
@property(copy, nonatomic) NSString *MMdd; // @synthesize MMdd=_MMdd;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *feed_id; // @synthesize feed_id=_feed_id;
@property(copy, nonatomic) NSString *seller_id; // @synthesize seller_id=_seller_id;
@property(copy, nonatomic) NSString *buyer_id; // @synthesize buyer_id=_buyer_id;
@property(copy, nonatomic) NSString *feed_time; // @synthesize feed_time=_feed_time;
@property(copy, nonatomic) NSString *feed_type; // @synthesize feed_type=_feed_type;
@property(copy, nonatomic) NSString *dateNumberString; // @synthesize dateNumberString=_dateNumberString;
@property(nonatomic) long long dateNumber; // @synthesize dateNumber=_dateNumber;
@property(copy, nonatomic) NSString *year; // @synthesize year=_year;
@property(copy, nonatomic) NSString *day; // @synthesize day=_day;
@property(copy, nonatomic) NSString *month; // @synthesize month=_month;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

