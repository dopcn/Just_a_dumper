//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface LineSquareSquareEventNotifiedKickoutFromSquare : NSObject
{
    NSString *__squareChatMid;
    NSArray *__kickees;
    struct {
        unsigned int squareChatMid:1;
        unsigned int kickees:1;
    } __isSet;
}

@property(retain, nonatomic) NSArray *kickees; // @synthesize kickees=__kickees;
@property(retain, nonatomic) NSString *squareChatMid; // @synthesize squareChatMid=__squareChatMid;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (void)read:(id)arg1;

@end

