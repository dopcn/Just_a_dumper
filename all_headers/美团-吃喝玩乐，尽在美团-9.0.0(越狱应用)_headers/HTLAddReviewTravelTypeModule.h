//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UGCAddReviewBaseModule.h"

@class NSString, NVModelBaseReviewHotelTravelSection;

@interface HTLAddReviewTravelTypeModule : UGCAddReviewBaseModule
{
    NSString *_labelString;
}

+ (id)moduleKey;
@property(retain, nonatomic) NSString *labelString; // @synthesize labelString=_labelString;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupModule;
- (_Bool)canSubmit;
- (id)cidName;

// Remaining properties
@property(retain, nonatomic) NVModelBaseReviewHotelTravelSection *configData; // @dynamic configData;

@end

