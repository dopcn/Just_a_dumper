//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, YYChatMessage;

@interface YYChatVoiceMessageInfo : NSObject
{
    NSString *_filePath;
    YYChatMessage *_chatMessage;
}

@property(retain, nonatomic) YYChatMessage *chatMessage; // @synthesize chatMessage=_chatMessage;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFilePath:(id)arg1 chatMessage:(id)arg2;

@end

