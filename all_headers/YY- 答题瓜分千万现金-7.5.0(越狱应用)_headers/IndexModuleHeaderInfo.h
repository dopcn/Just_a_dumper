//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface IndexModuleHeaderInfo : NSObject
{
    NSNumber *_followId;
    NSString *_name;
    NSNumber *_icon;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *followId; // @synthesize followId=_followId;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

