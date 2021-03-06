//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol IFeedsVideoBrowserDelegate;

@interface MttFeedsVideoBrowserDataSource : NSObject
{
    _Bool _requestSuccess;
    id <IFeedsVideoBrowserDelegate> _delegate;
    NSMutableArray *_records;
}

@property(nonatomic) _Bool requestSuccess; // @synthesize requestSuccess=_requestSuccess;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(nonatomic) __weak id <IFeedsVideoBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)recordForIndexPath:(id)arg1;
- (void)getRecommendVideo:(id)arg1 option:(id)arg2 action:(unsigned long long)arg3;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initWithVideoRecord:(id)arg1;
- (id)init;

@end

