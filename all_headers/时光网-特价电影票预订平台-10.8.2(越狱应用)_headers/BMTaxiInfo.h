//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BMTaxiInfo : NSObject
{
    int _distance;
    int _duration;
    float _perKMPrice;
    int _totalPrice;
    NSString *_desc;
}

@property(nonatomic) int totalPrice; // @synthesize totalPrice=_totalPrice;
@property(nonatomic) float perKMPrice; // @synthesize perKMPrice=_perKMPrice;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

