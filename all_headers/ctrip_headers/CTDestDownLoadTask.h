//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTDestDownLoadModel;
@protocol CTDestDownLoadStrategyDelegate;

@interface CTDestDownLoadTask : NSObject
{
    int _netWorkType;
    CTDestDownLoadModel *_bookModel;
    id <CTDestDownLoadStrategyDelegate> _delegate;
}

@property(nonatomic) __weak id <CTDestDownLoadStrategyDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int netWorkType; // @synthesize netWorkType=_netWorkType;
@property(copy, nonatomic) CTDestDownLoadModel *bookModel; // @synthesize bookModel=_bookModel;
- (void).cxx_destruct;

@end

