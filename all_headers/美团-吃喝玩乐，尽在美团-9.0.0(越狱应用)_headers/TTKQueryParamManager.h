//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TTKTrainQueryProtocol;

@interface TTKQueryParamManager : NSObject
{
    id <TTKTrainQueryProtocol> _delegate;
}

+ (id)shareInstance;
@property(nonatomic) __weak id <TTKTrainQueryProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)queryInfo;

@end

