//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LTMAGPasteboardCacheModel : NSObject
{
    NSString *_teamNumber;
    NSString *_inviterNickname;
    NSString *_type;
}

@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *inviterNickname; // @synthesize inviterNickname=_inviterNickname;
@property(copy, nonatomic) NSString *teamNumber; // @synthesize teamNumber=_teamNumber;
- (void).cxx_destruct;
- (_Bool)checkIsValid;
- (void)clearData;

@end

