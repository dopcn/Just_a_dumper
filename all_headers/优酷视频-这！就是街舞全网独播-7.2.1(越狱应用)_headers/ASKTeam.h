//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ASKTeam : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSString *_shortName;
    NSString *_logoLink;
    NSString *_area;
}

@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *logoLink; // @synthesize logoLink=_logoLink;
@property(copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)init;

@end

