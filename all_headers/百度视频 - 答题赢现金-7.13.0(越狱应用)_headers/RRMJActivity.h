//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface RRMJActivity : NSObject <NSCoding>
{
    int _duration;
    int _type;
    NSString *_name;
    long long _start;
    NSString *_refer;
    NSString *_className;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *refer; // @synthesize refer=_refer;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)messagePack:(struct msgpack_packer *)arg1;

@end

