//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LineSquareSquareMember, NSString;

@interface LineSquareSquareEventNotifiedUpdateSquareMemberProfile : NSObject
{
    NSString *__squareChatMid;
    LineSquareSquareMember *__squareMember;
    struct {
        unsigned int squareChatMid:1;
        unsigned int squareMember:1;
    } __isSet;
}

@property(retain, nonatomic) LineSquareSquareMember *squareMember; // @synthesize squareMember=__squareMember;
@property(retain, nonatomic) NSString *squareChatMid; // @synthesize squareChatMid=__squareChatMid;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (void)read:(id)arg1;

@end

