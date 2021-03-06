//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LineSquareReportSquareMessageRequest : NSObject
{
    NSString *__squareMid;
    NSString *__squareChatMid;
    NSString *__squareMessageId;
    long long __reportType;
    NSString *__otherReason;
    struct {
        unsigned int squareMid:1;
        unsigned int squareChatMid:1;
        unsigned int squareMessageId:1;
        unsigned int reportType:1;
        unsigned int otherReason:1;
    } __isSet;
}

@property(copy, nonatomic) NSString *otherReason; // @synthesize otherReason=__otherReason;
@property(nonatomic) long long reportType; // @synthesize reportType=__reportType;
@property(copy, nonatomic) NSString *squareMessageId; // @synthesize squareMessageId=__squareMessageId;
@property(retain, nonatomic) NSString *squareChatMid; // @synthesize squareChatMid=__squareChatMid;
@property(retain, nonatomic) NSString *squareMid; // @synthesize squareMid=__squareMid;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (void)read:(id)arg1;

@end

