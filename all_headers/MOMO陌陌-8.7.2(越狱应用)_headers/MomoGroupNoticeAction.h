//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MomoGroupNoticeAction : NSObject
{
    NSString *text;
    NSString *url;
    int actionType;
}

+ (id)dictionaryToAction:(id)arg1;
+ (id)actionToDictionary:(id)arg1;
@property(nonatomic) int actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (void)dealloc;
- (id)init;

@end

