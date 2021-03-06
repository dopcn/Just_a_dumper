//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BMNRANetworkTask, NSString;

@interface BMRoadBookMyNetwork : NSObject
{
    CDUnknownBlockType _sucBlock;
    CDUnknownBlockType _failBlock;
    BMNRANetworkTask *_uploadTask;
    NSString *_imageId;
    NSString *_imageUrl;
    NSString *_pbFileId;
    NSString *_pbFileUrl;
}

@property(retain, nonatomic) NSString *pbFileUrl; // @synthesize pbFileUrl=_pbFileUrl;
@property(retain, nonatomic) NSString *pbFileId; // @synthesize pbFileId=_pbFileId;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *imageId; // @synthesize imageId=_imageId;
@property(retain, nonatomic) BMNRANetworkTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType sucBlock; // @synthesize sucBlock=_sucBlock;
- (void).cxx_destruct;
- (void)cleanBlock;
- (void)dealloc;
- (void)cancelRequest;
- (void)uploadFileData:(id)arg1 FileType:(int)arg2 fileId:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (void)onCreate;
- (id)init;

@end

