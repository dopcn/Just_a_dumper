//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface GYFileWalker : NSObject
{
    NSMutableDictionary *_dirContents;
    NSString *_currentDir;
}

@property(retain, nonatomic) NSString *currentDir; // @synthesize currentDir=_currentDir;
- (void).cxx_destruct;
- (void)reloadData;
- (id)itemAtIndex:(long long)arg1 ofSection:(long long)arg2;
- (long long)itemCountAtSection:(long long)arg1;
- (long long)numberOfSetions;
- (void)listDir;
- (id)init;

@end

