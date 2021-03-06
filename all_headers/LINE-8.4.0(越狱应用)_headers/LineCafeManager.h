//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LineCafeDataSource, NSMutableArray, NSString;

@interface LineCafeManager : NSObject
{
    _Bool enableLogger;
    _Bool enableBenchMark;
    LineCafeDataSource *dataSource;
    NSMutableArray *loadingImages;
    NSString *phase;
    NSString *obsApplicationHeader;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableBenchMark; // @synthesize enableBenchMark;
@property(nonatomic) _Bool enableLogger; // @synthesize enableLogger;
@property(retain, nonatomic) NSString *obsApplicationHeader; // @synthesize obsApplicationHeader;
@property(retain, nonatomic) NSString *phase; // @synthesize phase;
@property(retain, nonatomic) NSMutableArray *loadingImages; // @synthesize loadingImages;
@property(retain, nonatomic) LineCafeDataSource *dataSource; // @synthesize dataSource;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)shareTextFromOptions:(id)arg1;
- (_Bool)hasMediaList:(id)arg1;

@end

