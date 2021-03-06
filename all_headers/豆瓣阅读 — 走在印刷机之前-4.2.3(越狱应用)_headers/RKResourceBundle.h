//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSBundle, NSString;

@interface RKResourceBundle : NSObject <NSCopying, NSSecureCoding>
{
    NSBundle *_underlyingBundle;
    NSString *_bundleName;
    Class _containerBundleClass;
}

+ (_Bool)supportsSecureCoding;
+ (id)imageNamed:(id)arg1 ofType:(id)arg2 inBundleNamed:(id)arg3 containerBundleClass:(Class)arg4;
+ (id)imageNamed:(id)arg1 ofType:(id)arg2 inBundleNamed:(id)arg3;
+ (id)bundleNamed:(id)arg1 containerBundleClass:(Class)arg2;
+ (id)bundleNamed:(id)arg1;
@property(readonly, nonatomic) Class containerBundleClass; // @synthesize containerBundleClass=_containerBundleClass;
@property(readonly, copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleName:(id)arg1 containerBundleClass:(Class)arg2;
- (id)initWithBundleName:(id)arg1;
- (id)init;
- (id)imageNamed:(id)arg1 ofType:(id)arg2;
- (id)dataWithContentsOfResourceNamed:(id)arg1 ofType:(id)arg2;

@end

