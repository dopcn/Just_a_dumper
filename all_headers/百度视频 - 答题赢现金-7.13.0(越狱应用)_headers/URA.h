//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData, NSMutableDictionary;

@interface URA : NSObject
{
    NSMutableDictionary *_dicData;
    NSMutableData *_cacheData;
}

+ (id)instance;
@property(retain) NSMutableData *cacheData; // @synthesize cacheData=_cacheData;
@property(retain) NSMutableDictionary *dicData; // @synthesize dicData=_dicData;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)clearData;
- (unsigned char)closeResource:(id)arg1;
- (id)transformData:(id)arg1;
- (unsigned char)prepareURL:(id)arg1;

@end

