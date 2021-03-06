//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FileEngine : NSObject
{
    NSString *_mURL;
    NSString *_mBizId;
    NSString *_mPID;
}

+ (id)getInstance;
@property(retain, nonatomic) NSString *mPID; // @synthesize mPID=_mPID;
@property(retain, nonatomic) NSString *mBizId; // @synthesize mBizId=_mBizId;
@property(retain, nonatomic) NSString *mURL; // @synthesize mURL=_mURL;
- (void).cxx_destruct;
- (id)saveImg:(id)arg1 name:(id)arg2 overWrite:(_Bool)arg3;
- (void)uploadImgToServer:(id)arg1 img:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)setServerConfig:(id)arg1 bizId:(id)arg2 pid:(id)arg3;

@end

