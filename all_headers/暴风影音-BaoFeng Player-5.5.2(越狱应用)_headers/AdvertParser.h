//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSString;
@protocol AdvertParserDelegate;

@interface AdvertParser : NSObject <NSXMLParserDelegate>
{
    NSString *xmlElement;
    _Bool open;
    _Bool adm_flag;
    _Bool mz_flag;
    _Bool direct_flag;
    int requestStatus;
    NSString *mAdvertID;
    NSString *adv_id;
    NSString *show_time;
    NSString *type;
    NSString *title;
    NSString *desc;
    NSString *image_480;
    NSString *image_960;
    NSString *image_1136;
    NSString *image_1920;
    NSString *image_2436;
    NSString *target_url;
    NSString *app_store_id;
    NSString *admv_url;
    NSString *admc_url;
    NSArray *adm_time_delay;
    NSString *mzv_url;
    NSString *mzc_url;
    NSArray *mz_time_delay;
    NSString *view_url;
    NSString *click_url;
    NSArray *direct_time_delay;
    NSString *logo;
    NSString *dsp;
    NSString *sdk;
    NSMutableArray *pvArray;
    NSMutableArray *clickArray;
    NSString *loc;
    id <AdvertParserDelegate> _delegate;
    NSString *_pCurrentElementName;
    NSDate *_beginDate;
    NSArray *_temp;
    NSMutableArray *_other_dataArray;
    NSString *_contextCode;
    NSString *_inmobiNameSpace;
    NSString *_skip;
    NSString *_loading_dpl;
    NSString *_ctr;
    NSString *_req_id;
    NSString *_etc;
    NSString *_deeplink;
}

@property(copy, nonatomic) NSString *deeplink; // @synthesize deeplink=_deeplink;
@property(copy, nonatomic) NSString *etc; // @synthesize etc=_etc;
@property(copy, nonatomic) NSString *req_id; // @synthesize req_id=_req_id;
@property(copy, nonatomic) NSString *ctr; // @synthesize ctr=_ctr;
@property(copy, nonatomic) NSString *loading_dpl; // @synthesize loading_dpl=_loading_dpl;
@property(copy, nonatomic) NSString *skip; // @synthesize skip=_skip;
@property(copy, nonatomic) NSString *inmobiNameSpace; // @synthesize inmobiNameSpace=_inmobiNameSpace;
@property(copy, nonatomic) NSString *contextCode; // @synthesize contextCode=_contextCode;
@property(retain, nonatomic) NSMutableArray *other_dataArray; // @synthesize other_dataArray=_other_dataArray;
@property(retain, nonatomic) NSArray *temp; // @synthesize temp=_temp;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(copy, nonatomic) NSString *pCurrentElementName; // @synthesize pCurrentElementName=_pCurrentElementName;
@property(nonatomic) id <AdvertParserDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *loc; // @synthesize loc;
@property(retain, nonatomic) NSMutableArray *clickArray; // @synthesize clickArray;
@property(retain, nonatomic) NSMutableArray *pvArray; // @synthesize pvArray;
@property(copy, nonatomic) NSString *sdk; // @synthesize sdk;
@property(copy, nonatomic) NSString *dsp; // @synthesize dsp;
@property(copy, nonatomic) NSString *logo; // @synthesize logo;
@property(nonatomic) int requestStatus; // @synthesize requestStatus;
@property(nonatomic) _Bool direct_flag; // @synthesize direct_flag;
@property(retain, nonatomic) NSArray *direct_time_delay; // @synthesize direct_time_delay;
@property(copy, nonatomic) NSString *click_url; // @synthesize click_url;
@property(copy, nonatomic) NSString *view_url; // @synthesize view_url;
@property(nonatomic) _Bool mz_flag; // @synthesize mz_flag;
@property(retain, nonatomic) NSArray *mz_time_delay; // @synthesize mz_time_delay;
@property(copy, nonatomic) NSString *mzc_url; // @synthesize mzc_url;
@property(copy, nonatomic) NSString *mzv_url; // @synthesize mzv_url;
@property(nonatomic) _Bool adm_flag; // @synthesize adm_flag;
@property(retain, nonatomic) NSArray *adm_time_delay; // @synthesize adm_time_delay;
@property(copy, nonatomic) NSString *admc_url; // @synthesize admc_url;
@property(copy, nonatomic) NSString *admv_url; // @synthesize admv_url;
@property(copy, nonatomic) NSString *app_store_id; // @synthesize app_store_id;
@property(copy, nonatomic) NSString *target_url; // @synthesize target_url;
@property(copy, nonatomic) NSString *image_2436; // @synthesize image_2436;
@property(copy, nonatomic) NSString *image_1920; // @synthesize image_1920;
@property(copy, nonatomic) NSString *image_1136; // @synthesize image_1136;
@property(copy, nonatomic) NSString *image_960; // @synthesize image_960;
@property(copy, nonatomic) NSString *image_480; // @synthesize image_480;
@property(copy, nonatomic) NSString *desc; // @synthesize desc;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *type; // @synthesize type;
@property(copy, nonatomic) NSString *show_time; // @synthesize show_time;
@property(copy, nonatomic) NSString *adv_id; // @synthesize adv_id;
@property(copy, nonatomic) NSString *mAdvertID; // @synthesize mAdvertID;
@property(nonatomic) _Bool open; // @synthesize open;
- (void)dealloc;
- (id)insertUDID:(id)arg1;
- (id)insertMAC:(id)arg1;
- (void)adverCReport:(id)arg1;
- (void)sendHeziClickReport:(id)arg1 indexRow:(int)arg2;
- (void)sendOtherReport:(id)arg1;
- (void)adverVReport:(id)arg1;
- (void)sendHeziViewReport:(id)arg1 indexRow:(int)arg2;
- (void)focusClickedReport:(int)arg1;
- (void)focusDisplayReport:(int)arg1;
- (id)loadingImageUrl;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)ParserResponseData:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)statusWithRequest:(id)arg1;
- (id)initWithDvcTypeAsyn:(id)arg1 timeOutSeconds:(double)arg2;
- (id)initWithDvcType:(id)arg1 timeOutSeconds:(double)arg2;
- (id)initWithDvcType:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

