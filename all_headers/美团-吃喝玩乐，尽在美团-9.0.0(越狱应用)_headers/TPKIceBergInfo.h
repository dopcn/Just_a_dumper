//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TPKIceBergInfo : NSObject
{
    NSString *_htkEventTrackingID;
    NSDictionary *_htkCustomLog;
    NSString *_htkViewBid;
    NSString *_htkClickBid;
    NSString *_htkCid;
}

@property(copy, nonatomic) NSString *htkCid; // @synthesize htkCid=_htkCid;
@property(copy, nonatomic) NSString *htkClickBid; // @synthesize htkClickBid=_htkClickBid;
@property(copy, nonatomic) NSString *htkViewBid; // @synthesize htkViewBid=_htkViewBid;
@property(retain, nonatomic) NSDictionary *htkCustomLog; // @synthesize htkCustomLog=_htkCustomLog;
@property(copy, nonatomic) NSString *htkEventTrackingID; // @synthesize htkEventTrackingID=_htkEventTrackingID;
- (void).cxx_destruct;

@end

