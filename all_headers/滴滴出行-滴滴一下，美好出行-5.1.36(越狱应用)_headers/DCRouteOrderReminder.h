//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface DCRouteOrderReminder : JSONModel
{
    NSString<Optional> *_date_id;
    NSString<Optional> *_update_time;
    NSNumber<Optional> *_has_tip;
}

@property(copy, nonatomic) NSNumber<Optional> *has_tip; // @synthesize has_tip=_has_tip;
@property(copy, nonatomic) NSString<Optional> *update_time; // @synthesize update_time=_update_time;
@property(copy, nonatomic) NSString<Optional> *date_id; // @synthesize date_id=_date_id;
- (void).cxx_destruct;

@end

