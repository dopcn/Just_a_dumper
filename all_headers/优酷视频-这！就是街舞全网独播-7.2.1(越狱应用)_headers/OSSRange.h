//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface OSSRange : NSObject
{
    long long _startPosition;
    long long _endPosition;
}

@property(nonatomic) long long endPosition; // @synthesize endPosition=_endPosition;
@property(nonatomic) long long startPosition; // @synthesize startPosition=_startPosition;
- (id)description;
- (id)toHeaderString;
- (id)initWithStart:(long long)arg1 withEnd:(long long)arg2;

@end

