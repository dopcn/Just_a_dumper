//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface HXTagInfo : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_score;
    NSString *_seq;
}

@property(copy, nonatomic) NSString *seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

