//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface JDMoonCalendarFestivalModel : NSObject
{
    NSNumber *_code;
    NSString *_errmsg;
    NSArray *_monthList;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *monthList; // @synthesize monthList=_monthList;
@property(copy, nonatomic) NSString *errmsg; // @synthesize errmsg=_errmsg;
@property(retain, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

