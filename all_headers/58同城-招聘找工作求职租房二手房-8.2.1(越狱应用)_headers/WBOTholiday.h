//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOTBaseModel.h"

@class NSString;

@interface WBOTholiday : WBOTBaseModel
{
    NSString *_year;
    NSString *_date;
    NSString *_name;
    NSString *_primaryid;
}

+ (id)holidayWithDict:(id)arg1;
@property(copy, nonatomic) NSString *primaryid; // @synthesize primaryid=_primaryid;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *year; // @synthesize year=_year;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDict:(id)arg1;

@end

