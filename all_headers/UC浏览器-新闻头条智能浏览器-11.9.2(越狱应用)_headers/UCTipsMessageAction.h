//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UCTipsMessageAction : NSObject
{
    NSString *_title;
    long long _type;
    CDUnknownBlockType _actionBlock;
}

+ (id)actionWithType:(long long)arg1 title:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;

@end

