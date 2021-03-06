//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MovieInfoObtainer-Protocol.h"

@class NSString, NSURL;
@protocol MovieInfoObtainerDelegate;

@interface MovieInfoObtainer : NSObject <MovieInfoObtainer>
{
    _Bool _hasObtained;
    id <MovieInfoObtainerDelegate> movieInfoObtainerDelegate;
    NSURL *_obtainedMovieURL;
    CDStruct_6a564687 _obtainedProgressInfo;
}

+ (id)obtainerWithURL:(id)arg1 progressInfo:(CDStruct_6a564687)arg2;
@property(readonly, nonatomic) _Bool hasObtained; // @synthesize hasObtained=_hasObtained;
@property(readonly, nonatomic) CDStruct_6a564687 obtainedProgressInfo; // @synthesize obtainedProgressInfo=_obtainedProgressInfo;
@property(readonly, nonatomic) NSURL *obtainedMovieURL; // @synthesize obtainedMovieURL=_obtainedMovieURL;
@property(nonatomic) __weak id <MovieInfoObtainerDelegate> movieInfoObtainerDelegate; // @synthesize movieInfoObtainerDelegate;
- (void).cxx_destruct;
- (void)startObtainMovieInfo;
- (id)initWithURL:(id)arg1 progressInfo:(CDStruct_6a564687)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

