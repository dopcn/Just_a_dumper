//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray;

@interface VVDgVote : NSObject
{
    NSMutableArray *_options;
    long long _total;
    long long _style;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(retain, nonatomic) NSMutableArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (_Bool)readDictionary:(id)arg1;

@end

