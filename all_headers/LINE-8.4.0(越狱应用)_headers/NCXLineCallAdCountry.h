//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface NCXLineCallAdCountry : NSObject <NSCoding>
{
    NSString *mCode;
    NSString *mRateDivision;
}

@property(readonly, nonatomic) NSString *rateDivision; // @synthesize rateDivision=mRateDivision;
@property(readonly, nonatomic) NSString *code; // @synthesize code=mCode;
- (void)dealloc;
- (id)initWithLineCallAdCountry:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

