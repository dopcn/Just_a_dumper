//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TransientProperties : NSObject
{
    _Bool _isEngaged;
    int _position;
    int _place;
    NSString *_helperKey;
}

@property(nonatomic) _Bool isEngaged; // @synthesize isEngaged=_isEngaged;
@property(nonatomic) int place; // @synthesize place=_place;
@property(nonatomic) int position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *helperKey; // @synthesize helperKey=_helperKey;
- (void).cxx_destruct;
- (id)initWithHelperKey:(id)arg1 position:(int)arg2 place:(int)arg3;

@end

