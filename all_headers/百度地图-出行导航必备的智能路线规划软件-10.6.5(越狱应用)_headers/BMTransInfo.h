//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BMTransInfo : NSObject
{
    NSString *_start_station_id;
    NSString *_start_station_name;
    NSString *_end_station_id;
    NSString *_end_station_name;
    NSString *_line_id;
    NSString *_line_name;
    NSString *_how_to_do;
    NSString *_tips;
}

@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *how_to_do; // @synthesize how_to_do=_how_to_do;
@property(retain, nonatomic) NSString *line_name; // @synthesize line_name=_line_name;
@property(retain, nonatomic) NSString *line_id; // @synthesize line_id=_line_id;
@property(retain, nonatomic) NSString *end_station_name; // @synthesize end_station_name=_end_station_name;
@property(retain, nonatomic) NSString *end_station_id; // @synthesize end_station_id=_end_station_id;
@property(retain, nonatomic) NSString *start_station_name; // @synthesize start_station_name=_start_station_name;
@property(retain, nonatomic) NSString *start_station_id; // @synthesize start_station_id=_start_station_id;
- (void).cxx_destruct;
- (id)toDicionary;
- (id)init;

@end

