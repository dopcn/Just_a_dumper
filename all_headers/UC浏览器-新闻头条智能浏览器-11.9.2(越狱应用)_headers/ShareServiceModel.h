//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CustomShareDataProvider, NSArray, NSDictionary, NSHashTable, TencentOAuth;

@interface ShareServiceModel : NSObject
{
    NSDictionary *m_shareServiceKeyClassDict;
    TencentOAuth *m_oauth;
    int _currentType;
    CustomShareDataProvider *m_customDataProvider;
    long long _fromSource;
    NSArray *_shareServiceList;
    NSHashTable *_observers;
}

+ (id)getInstance;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) int currentType; // @synthesize currentType=_currentType;
@property(retain, nonatomic) NSArray *shareServiceList; // @synthesize shareServiceList=_shareServiceList;
@property(nonatomic) long long fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) CustomShareDataProvider *customDataProvider; // @synthesize customDataProvider=m_customDataProvider;
- (void)removeObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *allObservers;
- (void)addObserver:(id)arg1;
- (void)getShareDataForType:(int)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)shareSelectChannelCallBack;
- (id)customToastParentView;
- (id)extraInfo;
- (CDUnknownBlockType)customShareCallBack;
- (id)directSharePlatform;
- (void)clearCacheData;
- (id)failTextForKey:(id)arg1;
- (id)shareServiceFactoryForKey:(id)arg1;
- (id)shareServiceCanHandleURL:(id)arg1;
- (_Bool)canShareForKey:(id)arg1 type:(int)arg2;
- (id)getClassNameForKey:(id)arg1;
- (id)customApperenceDataSource;
- (id)disablePlatform;
- (void)loadShareServiceList;
- (struct SSItem *)itemList:(int *)arg1;
- (id)shareServiceList:(int)arg1;
- (void)dealloc;
- (id)init;

@end

