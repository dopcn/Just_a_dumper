//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface XAdClose : NSObject <NSCoding>
{
    NSString *_tx;
    NSArray *_imp;
}

+ (id)parse:(id)arg1;
@property(copy, nonatomic) NSArray *imp; // @synthesize imp=_imp;
@property(copy, nonatomic) NSString *tx; // @synthesize tx=_tx;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

