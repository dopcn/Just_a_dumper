//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDSBaseRequest.h"

@class NSString;

@interface WDSGetItemDetailRequest : WDSBaseRequest
{
    NSString *_itemID;
    NSString *_tmp_detail_id;
}

@property(retain, nonatomic) NSString *tmp_detail_id; // @synthesize tmp_detail_id=_tmp_detail_id;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (id)parseResponseData:(id)arg1;
- (void)assembleParams;
- (void)reset;
- (id)init;

@end

