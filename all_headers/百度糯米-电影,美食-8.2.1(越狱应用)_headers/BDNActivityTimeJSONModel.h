//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNBaseJSONModel.h"

@class NSNumber;
@protocol Optional;

@interface BDNActivityTimeJSONModel : BDNBaseJSONModel
{
    NSNumber<Optional> *_starttime;
    NSNumber<Optional> *_endtime;
}

@property(copy, nonatomic) NSNumber<Optional> *endtime; // @synthesize endtime=_endtime;
@property(copy, nonatomic) NSNumber<Optional> *starttime; // @synthesize starttime=_starttime;
- (void).cxx_destruct;
- (double)timestampEndTime;
- (double)timestampStartTime;

@end

