//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMAOSJSONModel.h"

@class NSString;
@protocol Optional;

@interface LTMTakeTaxiCheckUncompleteOrderOrigin : LTMAOSJSONModel
{
    NSString *_startLat;
    NSString *_startLng;
    NSString<Optional> *_startName;
}

@property(copy, nonatomic) NSString<Optional> *startName; // @synthesize startName=_startName;
@property(copy, nonatomic) NSString *startLng; // @synthesize startLng=_startLng;
@property(copy, nonatomic) NSString *startLat; // @synthesize startLat=_startLat;
- (void).cxx_destruct;

@end

