//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol IFlyEngineDelegate;

@interface IFlyEngine : NSObject
{
    id <IFlyEngineDelegate> _delegate;
    unsigned long long _resultCategory;
}

@property(nonatomic) unsigned long long resultCategory; // @synthesize resultCategory=_resultCategory;
@property(nonatomic) id <IFlyEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (int)end;
- (int)beginWithParams:(id)arg1 extraParams:(id)arg2;

@end

