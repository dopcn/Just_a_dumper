//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMAPLayerFactory : NSObject
{
}

+ (void)releaseFactory;
+ (id)shareFactory;
- (id)createLayerByLayerClass:(Class)arg1;
- (id)createLayerById:(long long)arg1;
- (id)createLayer:(long long)arg1;

@end

