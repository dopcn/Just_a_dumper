//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol QingSaveMonitorDelegate;

@interface QingSaveMonitor : NSObject
{
    id <QingSaveMonitorDelegate> _delegate;
}

+ (unsigned long long)monitorItemStageByOperationStage:(unsigned long long)arg1;
+ (id)defaultMonitor;
@property(nonatomic) __weak id <QingSaveMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)uploadProgress:(float)arg1 byParameterBasket:(id)arg2;
- (void)uploadDidFinished:(id)arg1 byParameterBasket:(id)arg2;
- (void)uploadDidFailed:(id)arg1 byParameterBasket:(id)arg2;
- (id)savingTaskItemsFilterOperationFile;
- (long long)statusFromUploadStatus:(long long)arg1;
- (_Bool)localID:(id)arg1 existInMonitorItems:(id)arg2;

@end

