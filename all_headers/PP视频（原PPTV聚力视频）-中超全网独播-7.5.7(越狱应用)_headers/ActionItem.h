//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ActionItem : NSObject
{
    NSString *_actionTitle;
    CDUnknownBlockType _actionCallback;
}

@property(copy, nonatomic) CDUnknownBlockType actionCallback; // @synthesize actionCallback=_actionCallback;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
- (void).cxx_destruct;

@end

